/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol;
@class NSString;

@interface AMSRatingsStorefrontTask : AMSTask <AMSBagConsumer> {

	unsigned long long _mediaType;
	id<AMSBagProtocol> _bag;
	NSString* _clientIdentifier;

}

@property (nonatomic,readonly) unsigned long long mediaType;              //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;                    //@synthesize bag=_bag - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier;               //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(id)createBagForSubProfile;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
-(NSString *)clientIdentifier;
-(unsigned long long)mediaType;
-(id<AMSBagProtocol>)bag;
-(id)performTask;
-(id)_urlForMediaType:(unsigned long long)arg1 ;
-(id)initWithMediaType:(unsigned long long)arg1 clientIdentifier:(id)arg2 bag:(id)arg3 ;
@end

