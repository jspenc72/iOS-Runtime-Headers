/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKCircleRequestContext : NSObject <NSSecureCoding> {
    BOOL  __notifyOfTimeout;
    NSString * _heartbeatTokenValue;
    NSString * _identityTokenValue;
    AKCircleRequestPayload * _payload;
    NSString * _pushToken;
    BOOL  _waitForReply;
    double  _waitForReplyTimeout;
}

@property (nonatomic) BOOL _notifyOfTimeout;
@property (nonatomic, retain) NSString *heartbeatTokenValue;
@property (nonatomic, retain) NSString *identityTokenValue;
@property (nonatomic, retain) AKCircleRequestPayload *payload;
@property (nonatomic, retain) NSString *pushToken;
@property (nonatomic) BOOL waitForReply;
@property (nonatomic) double waitForReplyTimeout;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)_notifyOfTimeout;
- (void)encodeWithCoder:(id)arg1;
- (id)heartbeatTokenValue;
- (id)identityTokenValue;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)payload;
- (id)pushToken;
- (void)setHeartbeatTokenValue:(id)arg1;
- (void)setIdentityTokenValue:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setWaitForReply:(BOOL)arg1;
- (void)setWaitForReplyTimeout:(double)arg1;
- (void)set_notifyOfTimeout:(BOOL)arg1;
- (BOOL)waitForReply;
- (double)waitForReplyTimeout;

@end
