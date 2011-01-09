/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableDictionary, NSData, DATaskManager;



@interface SubCalAccount : DAAccount 
{
    DATaskManager *_taskManager;
    NSMutableDictionary *_consumers;
    NSData *_tmpICSData;
}

@property BOOL shouldRemoveAlarms;
@property(retain) NSString *syncId;
@property(retain) NSDictionary *externalRepresentation;
@property(retain,readonly) NSString *scheduleIdentifier;
@property(retain,readonly) NSURL *subscriptionURL;
@property NSInteger subCalAccountVersion;
@property(retain) NSMutableDictionary *consumers;

+ (Class)accountClass;
+ (Class)clientClass;
+ (id)defaultProperties;
+ (id)supportedDataclasses;

- (void)dealloc;
- (BOOL)supportsAccountType:(NSInteger)arg1;
- (id)scheduleIdentifier;
- (id)subscriptionURL;
- (id)taskManager;
- (void)setConsumer:(id)arg1 forTask:(id)arg2;
- (id)consumerForTask:(id)arg1;
- (void)removeConsumerForTask:(id)arg1;
- (void)_checkValidityWithConsumer:(id)arg1 quickValidate:(BOOL)arg2;
- (void)checkValidityWithConsumer:(id)arg1;
- (void)quickValidate:(id)arg1;
- (void)subCalValidationTask:(id)arg1 finishedWithError:(id)arg2 calendarName:(id)arg3 calendarData:(id)arg4;
- (id)_tmpICSCalendarPath;
- (void)setTmpICSData:(id)arg1;
- (void)saveTmpICSData;
- (id)tmpICSData;
- (void)clearTmpICSData;
- (BOOL)_upgradeSelfFromVersion:(NSInteger)arg1 superClassUpgraded:(BOOL)arg2 accountManager:(id)arg3;
- (BOOL)upgradeAccountIfNecessaryWithAccountManager:(id)arg1;
- (id)urlForKeychain;
- (NSInteger)subCalAccountVersion;
- (void)setSubCalAccountVersion:(NSInteger)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)host;
- (void)setHost:(id)arg1;
- (id)syncId;
- (void)setSyncId:(id)arg1;
- (id)externalRepresentation;
- (void)setExternalRepresentation:(id)arg1;
- (NSInteger)port;
- (void)setPort:(NSInteger)arg1;
- (BOOL)useSSL;
- (void)setUseSSL:(BOOL)arg1;
- (BOOL)shouldRemoveAlarms;
- (void)setShouldRemoveAlarms:(BOOL)arg1;
- (void)refreshAllCalendars;
- (BOOL)subCalDATask:(id)arg1 shouldAllowTrust:(struct __SecTrust { }*)arg2 forHost:(id)arg3;
- (id)consumers;
- (void)setConsumers:(id)arg1;

@end