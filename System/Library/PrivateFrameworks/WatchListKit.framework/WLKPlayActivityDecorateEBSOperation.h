/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString;

@interface WLKPlayActivityDecorateEBSOperation : WLKUTSNetworkRequestOperation {

	NSString* _channelID;
	NSString* _externalContentID;

}

@property (nonatomic,copy,readonly) NSString * channelID;                      //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalContentID;              //@synthesize externalContentID=_externalContentID - In the implementation block
-(NSString *)channelID;
-(id)initWithChannelID:(id)arg1 externalContentID:(id)arg2 ;
-(NSString *)externalContentID;
@end

