/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKDashboardItemPresenter.h>

@protocol PKPaymentDataProvider;
@class PKPaymentTransactionIconGenerator, PKContactResolver, NSCache, UIImage, PKMapsSnapshotManager, PKThumbnailCollectionViewCell, PKContactAvatarManager, NSString;

@interface PKTransactionGroupThumbnailPresenter : NSObject <PKDashboardItemPresenter> {

	PKPaymentTransactionIconGenerator* _iconGenerator;
	PKContactResolver* _contactResolver;
	NSCache* _iconsPerMerchantCategory;
	UIImage* _mapsPlaceholderImage;
	PKMapsSnapshotManager* _snapshotManager;
	PKThumbnailCollectionViewCell* _sampleCell;
	id<PKPaymentDataProvider> _paymentDataProvider;
	PKContactAvatarManager* _avatarManager;

}

@property (nonatomic,retain) PKMapsSnapshotManager * snapshotManager;                    //@synthesize snapshotManager=_snapshotManager - In the implementation block
@property (nonatomic,retain) id<PKPaymentDataProvider> paymentDataProvider;              //@synthesize paymentDataProvider=_paymentDataProvider - In the implementation block
@property (nonatomic,retain) PKContactAvatarManager * avatarManager;                     //@synthesize avatarManager=_avatarManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(Class)itemClass;
-(id)mapsPlaceholderImage;
-(id)collectionViewCellClasses;
-(id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(/*^block*/id)arg5 ;
-(CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3 ;
-(PKMapsSnapshotManager *)snapshotManager;
-(void)setSnapshotManager:(PKMapsSnapshotManager *)arg1 ;
-(id<PKPaymentDataProvider>)paymentDataProvider;
-(void)setPaymentDataProvider:(id<PKPaymentDataProvider>)arg1 ;
-(PKContactAvatarManager *)avatarManager;
-(void)setAvatarManager:(PKContactAvatarManager *)arg1 ;
-(double)thumbnailWidth;
@end

