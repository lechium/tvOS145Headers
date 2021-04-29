/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSMutableDictionary, NSObject;

@interface VCVideoSourceTokenManager : NSObject {

	VCVideoSourceTokenManager* _tokenManager;
	NSMutableDictionary* _videoSourceTokens;
	NSMutableDictionary* _sourceNames;
	unsigned long long _identifierSeeds[4];
	NSObject*<OS_dispatch_queue> _tokenManagerQueue;

}
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(VCVideoSourceToken)createtokenForDeviceName:(id)arg1 sourceType:(int)arg2 ;
-(VCVideoSourceToken)tokenForDeviceName:(id)arg1 sourceType:(int)arg2 ;
-(id)deviceNameForToken:(VCVideoSourceToken)arg1 ;
@end
