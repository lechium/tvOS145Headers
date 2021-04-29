/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/MobileSoftwareUpdate
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileSoftwareUpdate/MSUUpdateBrainLoader.h>

@class MAAsset;

@interface MSUUpdateBrainAssetLoader : MSUUpdateBrainLoader {

	MAAsset* _updateAsset;

}

@property (nonatomic,retain) MAAsset * updateAsset;              //@synthesize updateAsset=_updateAsset - In the implementation block
-(void)dealloc;
-(BOOL)cancel:(id*)arg1 ;
-(MAAsset *)updateAsset;
-(id)initWithUpdateAsset:(id)arg1 ;
-(void)loadUpdateBrainWithMAOptions:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(void)loadUpdateBrainWithOptions:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(void)adjustMAOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)adjustOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)purgeUpdateBrains:(id*)arg1 ;
-(long long)requiredDiskSpace:(id*)arg1 ;
-(void)setUpdateAsset:(MAAsset *)arg1 ;
@end

