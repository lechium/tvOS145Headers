/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSSQLProperty.h>

@class NSString, NSSQLEntity;

@interface NSSQLRelationship : NSSQLProperty {

	NSString* _name;
	NSSQLEntity* _destinationEntity;
	NSSQLRelationship* _inverse;

}
-(id)name;
-(void)dealloc;
-(BOOL)isOrdered;
-(id)destinationEntity;
-(id)inverseRelationship;
-(id)correlationTableName;
-(id)relationshipDescription;
-(id)foreignKey;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)sourceEntity;
-(void)_setInverseRelationship:(id)arg1 ;
-(void)_setName:(id)arg1 ;
-(id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)_setForeignOrderKey:(id)arg1 ;
@end
