/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PXPhotosDetailsLoadCoordinator;

@interface PXPhotosDetailsLoadCoordinationToken : NSObject {

	BOOL _didComplete;
	PXPhotosDetailsLoadCoordinator* __loadCoordinator;

}

@property (nonatomic,__weak,readonly) PXPhotosDetailsLoadCoordinator * _loadCoordinator;              //@synthesize _loadCoordinator=__loadCoordinator - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_timeout;
-(void)complete;
-(id)_initWithLoadCoordinator:(id)arg1 ;
-(PXPhotosDetailsLoadCoordinator *)_loadCoordinator;
@end

