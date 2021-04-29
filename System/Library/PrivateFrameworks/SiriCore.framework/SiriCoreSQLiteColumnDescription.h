/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriCore/SiriCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface SiriCoreSQLiteColumnDescription : NSObject <NSCopying> {

	NSString* _name;
	NSString* _type;
	NSArray* _constraints;

}

@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSArray * constraints;              //@synthesize constraints=_constraints - In the implementation block
+(id)integerPrimaryKeyColumnWithName:(id)arg1 ;
+(id)uniqueTextColumnWithName:(id)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(NSArray *)constraints;
-(id)initWithName:(id)arg1 type:(id)arg2 constraints:(id)arg3 ;
-(id)initWithName:(id)arg1 type:(id)arg2 constraintsProvider:(/*^block*/id)arg3 ;
@end

