/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEventDetailAttendeesListView;

@interface EKEventDetailAttendeesCell : EKEventDetailCell  {
    EKEventDetailAttendeesListView *_attendeesListView;
}


- (void)setAttendees:(id)arg1;
- (BOOL)update;
- (id)viewControllerForCell;
- (id)_attendeesListView;
- (void)layoutForWidth:(float)arg1 position:(int)arg2;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2;
- (void)dealloc;

@end