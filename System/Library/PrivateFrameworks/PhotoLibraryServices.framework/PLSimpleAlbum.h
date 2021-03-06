/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLAssetContainer.h>

@class NSString, NSOrderedSet, PLManagedAsset, NSArray, NSDate;

@interface PLSimpleAlbum : NSObject <PLAssetContainer> {

	NSString* _title;
	NSOrderedSet* _assets;
	PLManagedAsset* _keyAsset;
	PLManagedAsset* _secondaryKeyAsset;
	PLManagedAsset* _tertiaryKeyAsset;

}

@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,retain,readonly) NSOrderedSet * assets; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset;                            //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset;                   //@synthesize secondaryKeyAsset=_secondaryKeyAsset - In the implementation block
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset;                    //@synthesize tertiaryKeyAsset=_tertiaryKeyAsset - In the implementation block
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * endDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEmpty;
-(unsigned long long)approximateCount;
-(NSString *)title;
-(NSString *)uuid;
-(NSString *)localizedTitle;
-(unsigned long long)photosCount;
-(NSOrderedSet *)assets;
-(PLManagedAsset *)keyAsset;
-(void)setKeyAsset:(PLManagedAsset *)arg1 ;
-(unsigned long long)videosCount;
-(unsigned long long)assetsCount;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(PLManagedAsset *)secondaryKeyAsset;
-(PLManagedAsset *)tertiaryKeyAsset;
-(BOOL)canShowComments;
-(BOOL)canShowAvalancheStacks;
-(NSArray *)localizedLocationNames;
-(void)setSecondaryKeyAsset:(PLManagedAsset *)arg1 ;
-(void)setTertiaryKeyAsset:(PLManagedAsset *)arg1 ;
-(id)initWithTitle:(id)arg1 assets:(id)arg2 ;
-(long long)_countOfAssetType:(short)arg1 ;
@end

