/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUSectionsResponse : NSObject {
    BOOL  _cacheable;
    SUClientInterface * _clientInterface;
    UIImage * _moreListImage;
    UIImage * _moreListSelectedImage;
    NSMutableDictionary * _rawResponseDictionary;
    int  _responseType;
    NSMutableDictionary * _sectionsCache;
    NSNumber * _shouldResetUserOrdering;
}

@property (nonatomic, readonly) NSArray *allSections;
@property (getter=isCacheable, nonatomic) BOOL cacheable;
@property (nonatomic, retain) UIImage *moreListImage;
@property (nonatomic, readonly) SSItemImageCollection *moreListImageCollection;
@property (nonatomic, retain) UIImage *moreListSelectedImage;
@property (nonatomic, readonly) NSString *moreListTitle;
@property (nonatomic, readonly, copy) NSDictionary *rawResponseDictionary;
@property (nonatomic, readonly) int responseType;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) NSDictionary *sectionsDictionary;
@property (nonatomic) BOOL shouldResetUserOrdering;
@property (nonatomic, copy) NSString *storeFrontIdentifier;
@property (nonatomic, readonly) NSString *versionString;

+ (id)lastCachedVersionIdentifier;
+ (id)sectionsCacheDirectory;
+ (void)setLastCachedVersionIdentifier:(id)arg1;

- (void)_applyDefaultSearchFieldConfigurationsToSections:(id)arg1;
- (void)_dropImageKeysFromArray:(id)arg1;
- (void)_dropImageKeysFromDictionary:(id)arg1;
- (BOOL)_loadArtworkFromCacheDirectory:(id)arg1;
- (void)_loadButtonArtworkForSection:(id)arg1 buttons:(id)arg2 cachePath:(id)arg3;
- (id)_newImageForIdentifier:(id)arg1 variant:(id)arg2 cacheDirectory:(id)arg3;
- (id)_newSectionsFromDictionary:(id)arg1;
- (id)_newVariantStringForButton:(id)arg1;
- (void)_writeButtonImagesForSection:(id)arg1 buttons:(id)arg2 cachePath:(id)arg3;
- (void)_writeImage:(id)arg1 toCachePath:(id)arg2 forIdentifier:(id)arg3 variant:(id)arg4;
- (id)allSections;
- (void)dealloc;
- (void)dropEmbeddedImages;
- (id)init;
- (id)initWithClientInterface:(id)arg1 cacheDirectory:(id)arg2;
- (id)initWithClientInterface:(id)arg1 sectionsDictionary:(id)arg2 responseType:(int)arg3;
- (BOOL)isCacheable;
- (id)moreListImage;
- (id)moreListImageCollection;
- (id)moreListSelectedImage;
- (id)moreListTitle;
- (id)rawResponseDictionary;
- (int)responseType;
- (id)sections;
- (id)sectionsDictionary;
- (void)setCacheable:(BOOL)arg1;
- (void)setMoreListImage:(id)arg1;
- (void)setMoreListSelectedImage:(id)arg1;
- (void)setShouldResetUserOrdering:(BOOL)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (BOOL)shouldResetUserOrdering;
- (id)storeFrontIdentifier;
- (id)versionString;
- (BOOL)writeToCacheDirectory:(id)arg1 error:(id*)arg2;

@end
