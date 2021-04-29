/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INIntentDescriptionExport.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface INIntentDescription : NSObject <INIntentDescriptionExport, NSCopying> {

	NSDictionary* _slotsByName;
	NSDictionary* _alternativeSlotNames;
	BOOL _isPrivate;
	NSString* _name;
	NSString* _responseName;
	Class _facadeClass;
	Class _dataClass;
	NSString* _type;
	SEL _handleSelector;
	SEL _confirmSelector;

}

@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * responseName;                 //@synthesize responseName=_responseName - In the implementation block
@property (nonatomic,readonly) Class facadeClass;                            //@synthesize facadeClass=_facadeClass - In the implementation block
@property (nonatomic,readonly) Class dataClass;                              //@synthesize dataClass=_dataClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL isPrivate;                               //@synthesize isPrivate=_isPrivate - In the implementation block
@property (nonatomic,readonly) SEL handleSelector;                           //@synthesize handleSelector=_handleSelector - In the implementation block
@property (nonatomic,readonly) SEL confirmSelector;                          //@synthesize confirmSelector=_confirmSelector - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * slotsByName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(NSString *)responseName;
-(Class)facadeClass;
-(Class)dataClass;
-(BOOL)isPrivate;
-(SEL)handleSelector;
-(SEL)confirmSelector;
-(id)initWithName:(id)arg1 responseName:(id)arg2 facadeClass:(Class)arg3 dataClass:(Class)arg4 type:(id)arg5 isPrivate:(BOOL)arg6 handleSelector:(SEL)arg7 confirmSelector:(SEL)arg8 slotsByName:(id)arg9 ;
-(id)slotByName:(id)arg1 ;
-(id)slotDescriptions;
-(NSDictionary *)slotsByName;
@end
