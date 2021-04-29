/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INSpeakableString, NSArray, NSDateComponents, NSString;

@interface INTaskList : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {

	INSpeakableString* _title;
	NSArray* _tasks;
	INSpeakableString* _groupName;
	NSDateComponents* _createdDateComponents;
	NSDateComponents* _modifiedDateComponents;
	NSString* _identifier;

}

@property (readonly) long long taskListType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) INSpeakableString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tasks;                                        //@synthesize tasks=_tasks - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * groupName;                          //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * createdDateComponents;               //@synthesize createdDateComponents=_createdDateComponents - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * modifiedDateComponents;              //@synthesize modifiedDateComponents=_modifiedDateComponents - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(INSpeakableString *)title;
-(INSpeakableString *)groupName;
-(id)_dictionaryRepresentation;
-(NSArray *)tasks;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)initWithTitle:(id)arg1 tasks:(id)arg2 groupName:(id)arg3 taskListType:(long long)arg4 createdDateComponents:(id)arg5 modifiedDateComponents:(id)arg6 identifier:(id)arg7 ;
-(long long)taskListType;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(id)initWithTitle:(id)arg1 tasks:(id)arg2 groupName:(id)arg3 createdDateComponents:(id)arg4 modifiedDateComponents:(id)arg5 identifier:(id)arg6 ;
-(NSDateComponents *)createdDateComponents;
-(NSDateComponents *)modifiedDateComponents;
@end

