/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreData/CoreData-Structs.h>
@class NSSQLEntity, NSMutableArray, NSMutableDictionary;

@interface NSSQLEntity_DerivedAttributesExtension : NSObject {

	NSSQLEntity* _entity;
	CFDictionaryRef _derivedAttributes;
	NSMutableArray* _triggerSQL;
	NSMutableDictionary* _migrationSQL;

}
-(void)dealloc;
-(id)entity;
-(id)initWithEntity:(id)arg1 ;
-(id)migrationSQL;
-(void)addDerivationKeypath:(id)arg1 forAttribute:(id)arg2 ;
-(id)derivedAttributes;
-(id)triggerSQL;
-(void)_generateTriggerSQL;
@end

