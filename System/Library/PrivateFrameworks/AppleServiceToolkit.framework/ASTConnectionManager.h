/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class ASTIdentity;


@protocol ASTConnectionManager <NSObject>
@property (assign,nonatomic,__weak) id<ASTConnectionManagerDelegate> delegate; 
@property (nonatomic,retain) ASTIdentity * identity; 
@required
-(id<ASTConnectionManagerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(ASTIdentity *)identity;
-(void)setIdentity:(id)arg1;
-(void)postSessionExistsForIdentities:(id)arg1 ticket:(id)arg2 timeout:(double)arg3 allowsCellularAccess:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(id)postEnrollAllowingCellularAccess:(BOOL)arg1;
-(id)postRequest:(id)arg1 allowsCellularAccess:(BOOL)arg2;
-(BOOL)postAuthInfo:(id)arg1 allowsCellularAccess:(BOOL)arg2;
-(BOOL)postProfile:(id)arg1 allowsCellularAccess:(BOOL)arg2;
-(void)postSealableFile:(id)arg1 fileSequence:(id)arg2 totalFiles:(id)arg3 testId:(id)arg4 dataId:(id)arg5 allowsCellularAccess:(BOOL)arg6 completion:(/*^block*/id)arg7;
-(void)postTestResult:(id)arg1 allowsCellularAccess:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)cancelAllTestResults;
-(void)downloadAsset:(id)arg1 destinationFileHandle:(id)arg2 allowsCellularAccess:(BOOL)arg3 completion:(/*^block*/id)arg4;

@end

