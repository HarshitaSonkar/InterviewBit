/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 static bool myComp(const Interval &a, const Interval &b) {
    if (a.start > b.start) {
        return false;
    } else if (a.start < b.start) {
        return true;
    } else {
        a.end < b.end ? 1 : 0;
    }
}
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval> vect;
    intervals.push_back(newInterval);

    // sort the intervals using the helper function

    sort(intervals.begin(), intervals.end(), myComp);

    vect.push_back(intervals[0]);

    // Compare the intervals end points

    for (int i = 1; i < intervals.size(); i ++) {
        if (vect[vect.size() - 1].end >= intervals[i].start) {
            vect[vect.size() - 1].end = max(vect[vect.size() - 1].end, intervals[i].end);
        } else {
            vect.push_back(intervals[i]);
        }
    }
    return vect;
}
