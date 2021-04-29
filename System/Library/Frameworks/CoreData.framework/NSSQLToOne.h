/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSSQLRelationship.h>

@class NSSQLForeignKey, NSSQLForeignEntityKey, NSSQLForeignOrderKey;

@interface NSSQLToOne : NSSQLRelationship {

	NSSQLForeignKey* _foreignKey;
	NSSQLForeignEntityKey* _foreignEntityKey;
	NSSQLForeignOrderKey* _foreignOrderKey;
	BOOL _isVirtual;

}
-(id)description;
-(void)dealloc;
-(unsigned)slot;
-(BOOL)isOptional;
-(id)columnName;
-(id)foreignEntityKey;
-(id)foreignKey;
-(id)foreignOrderKey;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(BOOL)isVirtual;
-(id)initWithEntity:(id)arg1 inverseToMany:(id)arg2 ;
-(id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)_setForeignOrderKey:(id)arg1 ;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 virtualForToMany:(id)arg3 ;
@end

