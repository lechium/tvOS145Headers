/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IXCoordinatorWithAppAssetPromise <NSObject>
@property (nonatomic,readonly) BOOL hasAppAssetPromise; 
@required
-(BOOL)setAppAssetPromise:(id)arg1 error:(id*)arg2;
-(id)appAssetPromiseWithError:(id*)arg1;
-(BOOL)setAppAssetPromiseResponsibleClient:(unsigned long long)arg1 error:(id*)arg2;
-(unsigned long long)appAssetPromiseResponsibleClientWithError:(id*)arg1;
-(BOOL)appAssetPromiseHasBegunFulfillment:(BOOL*)arg1 error:(id*)arg2;
-(BOOL)hasAppAssetPromise;

@end

