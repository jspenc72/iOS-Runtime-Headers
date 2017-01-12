/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIVisualEffectView : UIVisualEffectView <EKUITintColorUpdateDelegate> {
    NSObject<EKUITintColorUpdateDelegate> * _tintColorDelegate;
    TintColorUpdateView * _updateView;
}

@property (nonatomic) NSObject<EKUITintColorUpdateDelegate> *tintColorDelegate;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTintColorDelegate:(id)arg1;
- (void)subTintColorUpdatedToColor:(id)arg1;
- (id)tintColorDelegate;
- (void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2;

@end