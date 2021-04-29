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

@interface SiriCoreSQLiteTableDescription : NSObject <NSCopying> {

	NSString* _name;
	NSArray* _columns;
	NSArray* _constraints;

}

@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * columns;                  //@synthesize columns=_columns - In the implementation block
@property (nonatomic,copy,readonly) NSArray * constraints;              //@synthesize constraints=_constraints - In the implementation block
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)columns;
-(NSArray *)constraints;
-(id)initWithName:(id)arg1 columns:(id)arg2 constraints:(id)arg3 ;
-(id)initWithName:(id)arg1 columnsProvider:(/*^block*/id)arg2 constraintsProvider:(/*^block*/id)arg3 ;
@end
