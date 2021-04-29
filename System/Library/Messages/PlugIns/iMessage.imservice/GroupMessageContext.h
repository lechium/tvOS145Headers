/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface GroupMessageContext : NSObject {

	BOOL _groupChat;
	NSDictionary* _groupPayload;
	NSDictionary* _additionalPayload;

}

@property (nonatomic,readonly) NSDictionary * groupPayload;                    //@synthesize groupPayload=_groupPayload - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalPayload;               //@synthesize additionalPayload=_additionalPayload - In the implementation block
@property (getter=isGroupChat,nonatomic,readonly) BOOL groupChat;              //@synthesize groupChat=_groupChat - In the implementation block
-(BOOL)isGroupChat;
-(NSDictionary *)additionalPayload;
-(id)initWithGroupPayload:(id)arg1 additionalPayload:(id)arg2 isGroupChat:(BOOL)arg3 ;
-(NSDictionary *)groupPayload;
@end

