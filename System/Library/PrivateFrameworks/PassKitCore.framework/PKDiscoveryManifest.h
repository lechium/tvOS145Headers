/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, PKDiscoveryMessagesMetadata;

@interface PKDiscoveryManifest : NSObject <NSSecureCoding> {

	long long _version;
	NSArray* _rules;
	NSArray* _discoveryItems;
	PKDiscoveryMessagesMetadata* _messagesMetadata;

}

@property (nonatomic,readonly) long long version;                                           //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSArray * rules;                                             //@synthesize rules=_rules - In the implementation block
@property (nonatomic,readonly) NSArray * discoveryItems;                                    //@synthesize discoveryItems=_discoveryItems - In the implementation block
@property (nonatomic,readonly) PKDiscoveryMessagesMetadata * messagesMetadata;              //@synthesize messagesMetadata=_messagesMetadata - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)manifestFromURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)version;
-(NSArray *)rules;
-(id)initWithVersion:(long long)arg1 rules:(id)arg2 discoveryItems:(id)arg3 engagementMessagesMetadata:(id)arg4 ;
-(NSArray *)discoveryItems;
-(PKDiscoveryMessagesMetadata *)messagesMetadata;
@end

