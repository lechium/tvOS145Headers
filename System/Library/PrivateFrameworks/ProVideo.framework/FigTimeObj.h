/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface FigTimeObj : NSObject <NSCopying, NSSecureCoding> {

	FigTime _time;

}
+(BOOL)supportsSecureCoding;
+(id)timeWithTime:(FigTime)arg1 ;
+(BOOL)classIsAbstract;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)getValue:(FigTime*)arg1 ;
-(FigTime)time;
-(void)setTime:(FigTime)arg1 ;
-(id)initWithFigTime:(FigTime)arg1 ;
-(long long)compareWithTime:(id)arg1 ;
@end

