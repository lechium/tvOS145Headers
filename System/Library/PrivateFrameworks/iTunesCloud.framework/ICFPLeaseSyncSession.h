/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <iTunesCloud/iTunesCloud-Structs.h>
@interface ICFPLeaseSyncSession : NSObject {

	FPLeaseSyncOpaque_Ref _fpLeaseSync;
	FairPlayHWInfo_ _hardwareInfo;
	unsigned _mediaKind;
	unsigned long long _accountID;
	id _leaseID;

}

@property (nonatomic,readonly) unsigned long long accountID;              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) id leaseID;                                //@synthesize leaseID=_leaseID - In the implementation block
@property (nonatomic,readonly) unsigned mediaKind;                        //@synthesize mediaKind=_mediaKind - In the implementation block
+(id)leaseSyncSessionWithID:(id)arg1 accountID:(unsigned long long)arg2 mediaKind:(unsigned)arg3 returningLeaseSyncRequestData:(id*)arg4 error:(id*)arg5 ;
-(void)dealloc;
-(unsigned long long)accountID;
-(unsigned)mediaKind;
-(id)_initWithFPLeaseSync:(FPLeaseSyncOpaque_Ref)arg1 leaseID:(id)arg2 accountID:(unsigned long long)arg3 hardwareInfo:(FairPlayHWInfo_)arg4 mediaKind:(unsigned)arg5 ;
-(BOOL)endLeaseSyncAndReturnError:(id*)arg1 ;
-(BOOL)getLeaseSyncRenewRequestData:(id*)arg1 error:(id*)arg2 ;
-(BOOL)importLeaseSyncResponseData:(id)arg1 error:(id*)arg2 ;
-(BOOL)processRenewResponseData:(id)arg1 error:(id*)arg2 ;
-(id)leaseID;
@end

