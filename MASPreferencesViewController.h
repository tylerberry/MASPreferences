//
// Any controller providing preference pane view must support this protocol
//

@protocol MASPreferencesViewController <NSObject>

@optional

- (void)viewWillAppear;
- (void)viewDidDisappear;
- (NSView*)initialKeyView;

@property (nonatomic, readonly) BOOL resizableWidth;
@property (nonatomic, readonly) BOOL resizableHeight;

@required

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSImage *toolbarItemImage;
@property (nonatomic, readonly) NSString *toolbarItemLabel;

@end
