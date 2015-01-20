/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSUUID;

@interface UIPercentDrivenInteractiveTransition : NSObject <UIViewControllerInteractiveTransitioning> {
    NSString *__originalFillMode;
    NSUUID *__uuid;
    long long _completionCurve;
    double _completionSpeed;
    double _duration;
    bool__transitionInterrupted;
    bool_didCommitAnimations;
}

@property(setter=_setOriginalFillMode:,retain) NSString * _originalFillMode;
@property(getter=_isTransitionInterrupted,setter=_setTransitionInterrupted:) bool _transitionInterrupted;
@property(setter=_setUuid:,retain) NSUUID * _uuid;
@property long long completionCurve;
@property double completionSpeed;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) double duration;
@property(readonly) unsigned long long hash;
@property(readonly) double percentComplete;
@property(readonly) Class superclass;

- (bool)_isTransitionInterrupted;
- (id)_originalFillMode;
- (void)_resetInteractionController;
- (void)_setDuration:(double)arg1;
- (void)_setOriginalFillMode:(id)arg1;
- (void)_setTransitionInterrupted:(bool)arg1;
- (void)_setUuid:(id)arg1;
- (void)_stopInteractiveTransition:(id)arg1;
- (void)_stopInteractiveTransition;
- (void)_updateInteractiveTransition:(id)arg1 percent:(double)arg2 isFinished:(bool)arg3 didComplete:(bool)arg4;
- (id)_uuid;
- (void)cancelInteractiveTransition;
- (long long)completionCurve;
- (double)completionSpeed;
- (void)dealloc;
- (double)duration;
- (void)finishInteractiveTransition;
- (id)init;
- (double)percentComplete;
- (void)setCompletionCurve:(long long)arg1;
- (void)setCompletionSpeed:(double)arg1;
- (void)startInteractiveTransition:(id)arg1 containerViews:(id)arg2 animation:(id)arg3;
- (void)startInteractiveTransition:(id)arg1;
- (void)updateInteractiveTransition:(double)arg1;

@end