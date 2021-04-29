/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VNGeometryUtils : NSObject
+(id)boundingCircleForPoints:(id)arg1 error:(id*)arg2 ;
+(id)boundingCircleForSIMDPoints:(const 1*)arg1 pointCount:(long long)arg2 aspectRatioForCentroid:(float)arg3 error:(id*)arg4 ;
+(BOOL)calculateArea:(double*)arg1 forContour:(id)arg2 orientedArea:(BOOL)arg3 error:(id*)arg4 ;
+(BOOL)calculateArea:(double*)arg1 forContourWithSIMDPoints:(const 2*)arg2 pointCount:(long long)arg3 orientedArea:(BOOL)arg4 error:(id*)arg5 ;
+(BOOL)calculatePerimeter:(double*)arg1 forContour:(id)arg2 error:(id*)arg3 ;
+(BOOL)calculatePerimeter:(double*)arg1 forContourWithSIMDPoints:(const 2*)arg2 pointCount:(long long)arg3 closedContour:(BOOL)arg4 error:(id*)arg5 ;
+(id)boundingCircleForContour:(id)arg1 error:(id*)arg2 ;
+(id)boundingCircleForSIMDPoints:(const 1*)arg1 pointCount:(long long)arg2 error:(id*)arg3 ;
@end

