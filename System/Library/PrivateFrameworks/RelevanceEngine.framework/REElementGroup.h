/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface REElementGroup : NSObject <REAutomaticExportedInterface, NSCopying> {

	NSString* _groupIdentifier;
	unsigned long long _behavior;
	long long _maxElementCount;

}

@property (nonatomic,readonly) NSString * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long behavior;               //@synthesize behavior=_behavior - In the implementation block
@property (assign,nonatomic) long long maxElementCount;                 //@synthesize maxElementCount=_maxElementCount - In the implementation block
+(id)topElementGroupWithIdentifier:(id)arg1 ;
+(id)adjoiningElementGroupWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)groupIdentifier;
-(unsigned long long)behavior;
-(void)setBehavior:(unsigned long long)arg1 ;
-(id)initWithGroupIdentifier:(id)arg1 ;
-(void)setMaxElementCount:(long long)arg1 ;
-(long long)maxElementCount;
@end

