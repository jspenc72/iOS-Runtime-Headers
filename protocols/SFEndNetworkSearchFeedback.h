/* Generated by RuntimeBrowser.
 */

@protocol SFEndNetworkSearchFeedback <SFEndSearchFeedback>

@required

- (NSDictionary *)networkTimingData;
- (long long)responseSize;
- (void)setNetworkTimingData:(NSDictionary *)arg1;
- (void)setResponseSize:(long long)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;

@end
