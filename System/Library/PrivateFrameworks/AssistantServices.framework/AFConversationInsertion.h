/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AceObject, NSString, NSIndexPath;

@interface AFConversationInsertion : NSObject {

	BOOL _transient;
	BOOL _supplemental;
	BOOL _immersiveExperience;
	long long _conversationItemType;
	AceObject* _aceObject;
	NSString* _aceCommandIdentifier;
	NSIndexPath* _indexPath;

}

@property (nonatomic,readonly) long long conversationItemType;                                     //@synthesize conversationItemType=_conversationItemType - In the implementation block
@property (nonatomic,readonly) AceObject * aceObject;                                              //@synthesize aceObject=_aceObject - In the implementation block
@property (nonatomic,copy,readonly) NSString * aceCommandIdentifier;                               //@synthesize aceCommandIdentifier=_aceCommandIdentifier - In the implementation block
@property (getter=isTransient,nonatomic,readonly) BOOL transient;                                  //@synthesize transient=_transient - In the implementation block
@property (getter=isSupplemental,nonatomic,readonly) BOOL supplemental;                            //@synthesize supplemental=_supplemental - In the implementation block
@property (getter=isImmersiveExperience,nonatomic,readonly) BOOL immersiveExperience;              //@synthesize immersiveExperience=_immersiveExperience - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                                            //@synthesize indexPath=_indexPath - In the implementation block
-(NSIndexPath *)indexPath;
-(BOOL)isTransient;
-(AceObject *)aceObject;
-(NSString *)aceCommandIdentifier;
-(BOOL)isSupplemental;
-(BOOL)isImmersiveExperience;
-(long long)conversationItemType;
-(id)initWithConversationItemType:(long long)arg1 aceObject:(id)arg2 aceCommandIdentifier:(id)arg3 transient:(BOOL)arg4 supplemental:(BOOL)arg5 immersiveExperience:(BOOL)arg6 indexPath:(id)arg7 ;
@end

