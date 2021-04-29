/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CATIDSMessage.h>

@protocol CATActiveIDSServiceConnectionMessageContent;
@class NSUUID, NSDictionary;

@interface CATActiveServiceConnectionIDSMessage : NSObject <CATIDSMessage> {

	NSUUID* _connectionIdentifier;
	id<CATActiveIDSServiceConnectionMessageContent> _content;

}

@property (nonatomic,readonly) NSUUID * connectionIdentifier;                                        //@synthesize connectionIdentifier=_connectionIdentifier - In the implementation block
@property (nonatomic,readonly) id<CATActiveIDSServiceConnectionMessageContent> content;              //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) long long messageType; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)instanceWithDictionary:(id)arg1 ;
-(id<CATActiveIDSServiceConnectionMessageContent>)content;
-(long long)messageType;
-(NSDictionary *)dictionaryValue;
-(NSUUID *)connectionIdentifier;
-(id)initWithConnectionIdentifier:(id)arg1 content:(id)arg2 ;
@end
