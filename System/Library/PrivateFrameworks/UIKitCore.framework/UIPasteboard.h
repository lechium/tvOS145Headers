/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString, NSURL, UIImage, UIColor;

@interface UIPasteboard : NSObject

@property (nonatomic,readonly) BOOL px_containsAssets; 
@property (nonatomic,copy,readonly) NSArray * availableTypes; 
@property (nonatomic,readonly) long long _changeCountIgnoringPinningActivity; 
@property (nonatomic,readonly) NSString * name; 
@property (getter=isPersistent,nonatomic,readonly) BOOL persistent; 
@property (nonatomic,readonly) long long changeCount; 
@property (nonatomic,copy) NSArray * itemProviders; 
@property (nonatomic,readonly) NSArray * pasteboardTypes; 
@property (nonatomic,readonly) long long numberOfItems; 
@property (nonatomic,copy) NSArray * items; 
@property (nonatomic,copy) NSString * string; 
@property (nonatomic,copy) NSArray * strings; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,copy) NSArray * URLs; 
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSArray * images; 
@property (nonatomic,copy) UIColor * color; 
@property (nonatomic,copy) NSArray * colors; 
@property (nonatomic,readonly) BOOL hasStrings; 
@property (nonatomic,readonly) BOOL hasURLs; 
@property (nonatomic,readonly) BOOL hasImages; 
@property (nonatomic,readonly) BOOL hasColors; 
+(id)px_newPasteboardRepresentationForAsset:(id)arg1 data:(id)arg2 utiType:(id)arg3 ;
+(id)generalPasteboard;
+(id)pasteboardWithName:(id)arg1 create:(BOOL)arg2 ;
+(id)pasteboardWithUniqueName;
+(void)removePasteboardWithName:(id)arg1 ;
+(id)_pasteboardWithName:(id)arg1 create:(BOOL)arg2 ;
+(id)_pasteboardWithUniqueName;
+(void)_pinItemProviders:(id)arg1 forPasteboardNamed:(id)arg2 withExpirationDate:(id)arg3 ;
+(void)_clearPinnedItemProvidersForPasteboardNamed:(id)arg1 ;
-(id)objectsForPasteboardType:(id)arg1 ;
-(void)px_setAssetRepresentations:(id)arg1 ;
-(void)px_setAssetRepresentation:(id)arg1 ;
-(id)px_assets;
-(BOOL)px_containsAssets;
-(NSString *)name;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(long long)changeCount;
-(void)setURLs:(NSArray *)arg1 ;
-(NSArray *)URLs;
-(NSArray *)items;
-(BOOL)isPersistent;
-(void)setPersistent:(BOOL)arg1 ;
-(UIImage *)image;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(NSArray *)colors;
-(void)setColors:(NSArray *)arg1 ;
-(NSArray *)images;
-(long long)numberOfItems;
-(void)setItems:(NSArray *)arg1 ;
-(void)setImages:(NSArray *)arg1 ;
-(NSArray *)pasteboardTypes;
-(id)dataForPasteboardType:(id)arg1 ;
-(id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(void)addItems:(id)arg1 ;
-(void)setObjects:(id)arg1 ;
-(BOOL)containsPasteboardTypes:(id)arg1 ;
-(id)valueForPasteboardType:(id)arg1 ;
-(BOOL)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2 ;
-(void)setValue:(id)arg1 forPasteboardType:(id)arg2 ;
-(void)setData:(id)arg1 forPasteboardType:(id)arg2 ;
-(id)pasteboardTypesForItemSet:(id)arg1 ;
-(void)setStrings:(NSArray *)arg1 ;
-(id)itemSetWithPasteboardTypes:(id)arg1 ;
-(NSArray *)strings;
-(NSArray *)itemProviders;
-(void)setItemProviders:(NSArray *)arg1 ;
-(BOOL)hasStrings;
-(void)setItems:(id)arg1 options:(id)arg2 ;
-(long long)_changeCountIgnoringPinningActivity;
-(BOOL)hasURLs;
-(BOOL)hasImages;
-(BOOL)hasColors;
-(BOOL)_hasStrings;
-(void)setItemProviders:(id)arg1 options:(id)arg2 ;
-(void)setItemProviders:(id)arg1 localOnly:(BOOL)arg2 expirationDate:(id)arg3 ;
-(void)_pinItemProviders:(id)arg1 expirationDate:(id)arg2 ;
-(void)_clearPinnedItemProviders;
-(void)setObjects:(id)arg1 options:(id)arg2 ;
-(void)setObjects:(id)arg1 localOnly:(BOOL)arg2 expirationDate:(id)arg3 ;
-(NSArray *)availableTypes;
-(id)itemProvidersForInstantiatingObjectsOfClass:(Class)arg1 ;
-(BOOL)canInstantiateObjectsOfClass:(Class)arg1 ;
-(id)_detectedPasteboardTypesForTypes:(id)arg1 ;
-(id)_detectedPasteboardTypeStringsForTypes:(id)arg1 ;
-(void)detectPatternsForPatterns:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)detectPatternsForPatterns:(id)arg1 inItemSet:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)detectValuesForPatterns:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)detectValuesForPatterns:(id)arg1 inItemSet:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

