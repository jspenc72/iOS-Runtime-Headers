/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface MeCardCache : NSObject {
    void *_me;
}

+ (void)_provideMeCardIfAvailableToBlock:(id)arg1 otherwiseCompleteWithBlock:(id)arg2;
+ (void)provideMeCardIfAvailableToBlock:(id)arg1;
+ (void)provideMeCardToBlock:(id)arg1;
+ (id)sharedCache;

- (void)_addressBookChanged:(id)arg1;
- (void)_requestMeCardWithBlock:(id)arg1;
- (void*)copyMeRecord;
- (void)dealloc;
- (id)init;
- (void)setMeRecord:(void*)arg1;

@end