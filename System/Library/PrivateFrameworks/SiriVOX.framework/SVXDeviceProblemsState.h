/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SVXDeviceProblemsState : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isFixingProblems;
	unsigned long long _problems;

}

@property (nonatomic,readonly) BOOL isFixingProblems;                    //@synthesize isFixingProblems=_isFixingProblems - In the implementation block
@property (nonatomic,readonly) unsigned long long problems;              //@synthesize problems=_problems - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(BOOL)isFixingProblems;
-(unsigned long long)problems;
-(id)initWithIsFixingProblems:(BOOL)arg1 problems:(unsigned long long)arg2 ;
@end

