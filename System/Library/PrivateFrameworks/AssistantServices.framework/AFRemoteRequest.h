/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AFRequestInfo, NSString;

@interface AFRemoteRequest : NSObject {

	AFRequestInfo* _info;
	NSString* _peerIdentifier;

}

@property (nonatomic,readonly) AFRequestInfo * info;               //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) NSString * peerIdentifier;              //@synthesize peerIdentifier=_peerIdentifier - In the implementation block
-(id)initWithInfo:(id)arg1 ;
-(AFRequestInfo *)info;
-(NSString *)peerIdentifier;
-(void)setPeerIdentifier:(NSString *)arg1 ;
-(void)sendWithCompletion:(/*^block*/id)arg1 ;
@end

