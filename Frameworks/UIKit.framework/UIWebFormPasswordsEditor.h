/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSMutableDictionary, NSDictionary;

@interface UIWebFormPasswordsEditor : NSObject {
    NSMutableDictionary *_credentialToProtectionSpaceMap;
    NSDictionary *_credentialsByProtectionSpace;
    NSMutableArray *_flattenedCredentials;
    BOOL _ignoreNotifications;
}

+ (id)sharedPasswordsEditor;

- (id)addressStringForCredential:(id)arg1;
- (void)credentialsChanged:(id)arg1;
- (void)dealloc;
- (id)protectionSpaceForCredential:(id)arg1;
- (void)removeAll;
- (void)removeSelectedItems:(id)arg1;
- (void)resetCredentials;
- (void)startMonitoringCredentials;
- (void)stopMonitoringCredentials;

@end