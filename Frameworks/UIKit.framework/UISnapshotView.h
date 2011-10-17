/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, UIColor, UIView;

@interface UISnapshotView : UIView  {
    struct CGSize { 
        float width; 
        float height; 
    } _contentSize;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentBeyondBounds;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _edgePadding;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _edgeInsets;
    struct CGPoint { 
        float x; 
        float y; 
    } _contentOffset;
    UIColor *_edgePaddingColor;
    UIView *_imageView;
    NSMutableArray *_edgePaddingViews;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _snapshotRect;
    unsigned int _disableEdgeAntialiasing : 1;
    unsigned int _disableVerticalStretch : 1;
}

@property(getter=isEdgeAntialiasingEnabled) BOOL edgeAntialiasingEnabled;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgePadding;
@property(retain) UIColor * edgePaddingColor;
@property(getter=_snapshotView,readonly) UIView * snapshotView;
@property(getter=_contentSize,readonly) struct CGSize { float x1; float x2; } contentSize;
@property(getter=_contentOffset,setter=_setContentOffset:) struct CGPoint { float x1; float x2; } contentOffset;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property(getter=isVerticalStretchEnabled) BOOL verticalStretchEnabled;
@property(getter=_snapshotRect,setter=_setSnapshotRect:) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } snapshotRect;


- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)edgePaddingColor;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgePadding;
- (void)_setSnapshotRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_snapshotRect;
- (BOOL)isVerticalStretchEnabled;
- (BOOL)isEdgeAntialiasingEnabled;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentsCenterForEdgePadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 withContentSize:(struct CGSize { float x1; float x2; })arg2;
- (void)_drawEdges:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 withContentSize:(struct CGSize { float x1; float x2; })arg2;
- (void)_addEdgePaddingViewInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_updateContentsRect;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_edgePadding;
- (void)_positionImageView;
- (void)setEdgeAntialiasingEnabled:(BOOL)arg1;
- (void)captureSnapshotRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromView:(id)arg2 withSnapshotType:(int)arg3;
- (void)setVerticalStretchEnabled:(BOOL)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setEdgePaddingColor:(id)arg1;
- (void)setEdgePadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)captureSnapshotOfView:(id)arg1 withSnapshotType:(int)arg2;
- (struct CGPoint { float x1; float x2; })_contentOffset;
- (id)_snapshotView;
- (struct CGSize { float x1; float x2; })_contentSize;
- (void)setContentStretch:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end