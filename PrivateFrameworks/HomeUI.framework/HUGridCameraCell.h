/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridCameraCell : HUGridCell {
    NSArray * _allConstraints;
    HUCameraView * _cameraView;
    UILabel * _descriptionLabel;
    NSArray * _descriptionLabelConstraints;
    HUDecayingTimer * _descriptionLabelUpdateTimer;
    HFItem * _item;
    HUGridCameraCellLayoutOptions * _layoutOptions;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSArray *allConstraints;
@property (nonatomic, retain) HUCameraView *cameraView;
@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) NSArray *descriptionLabelConstraints;
@property (nonatomic, retain) HUDecayingTimer *descriptionLabelUpdateTimer;
@property (nonatomic, retain) HUGridCameraCellLayoutOptions *layoutOptions;
@property (nonatomic, retain) UILabel *titleLabel;

+ (Class)layoutOptionsClass;
+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_animateTransitionWithView:(id)arg1 animations:(id /* block */)arg2;
- (id)_descriptionLabelText:(id)arg1;
- (void)_invalidateConstraints;
- (void)_updateCameraViewAppearance;
- (void)_updateLabelsAppearance;
- (id)allConstraints;
- (id)cameraView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cameraViewFrame;
- (void)dealloc;
- (id)descriptionLabel;
- (id)descriptionLabelConstraints;
- (id)descriptionLabelUpdateTimer;
- (void)displayStyleDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)item;
- (id)layoutOptions;
- (void)layoutOptionsDidChange;
- (void)prepareForReuse;
- (void)setAllConstraints:(id)arg1;
- (void)setCameraView:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setDescriptionLabelConstraints:(id)arg1;
- (void)setDescriptionLabelUpdateTimer:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)tintColorDidChange;
- (id)titleLabel;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(BOOL)arg1;

@end
