/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSObject, NSString;

@interface TSWPStorageRangeProvider : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    NSString *_identifier;
    NSObject *_object;
    } _range;
}

@property(readonly) NSString * identifier;
@property(readonly) NSObject * object;
@property(readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (id).cxx_construct;
- (void)dealloc;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)nextRange;
- (id)object;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (unsigned long long)rangeEnd;
- (unsigned long long)rangeLength;
- (unsigned long long)rangeStart;
- (void)setRangeStart:(unsigned long long)arg1;

@end