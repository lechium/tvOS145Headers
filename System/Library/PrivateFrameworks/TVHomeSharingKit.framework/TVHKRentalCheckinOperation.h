/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKRentalOperation.h>

@class NSOperation, TVHKAsynchronousWorkToken;

@interface TVHKRentalCheckinOperation : TVHKRentalOperation {

	NSOperation* _mediaServerCheckoutOperation;
	TVHKAsynchronousWorkToken* _checkinWorkToken;

}

@property (nonatomic,retain) NSOperation * mediaServerCheckoutOperation;                //@synthesize mediaServerCheckoutOperation=_mediaServerCheckoutOperation - In the implementation block
@property (nonatomic,retain) TVHKAsynchronousWorkToken * checkinWorkToken;              //@synthesize checkinWorkToken=_checkinWorkToken - In the implementation block
-(void)cancel;
-(void)executionDidBegin;
-(void)_startStoreCheckin;
-(NSOperation *)mediaServerCheckoutOperation;
-(TVHKAsynchronousWorkToken *)checkinWorkToken;
-(void)_startMediaServerCheckoutOperation;
-(void)setCheckinWorkToken:(TVHKAsynchronousWorkToken *)arg1 ;
-(void)setMediaServerCheckoutOperation:(NSOperation *)arg1 ;
@end

