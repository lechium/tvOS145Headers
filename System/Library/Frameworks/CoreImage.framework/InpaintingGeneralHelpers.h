/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreImage/CoreImage-Structs.h>
@interface InpaintingGeneralHelpers : NSObject
+(BOOL)fillError:(id*)arg1 withGeneralErrorWithMessage:(id)arg2 ;
+(id)errorWithCode:(long long)arg1 message:(id)arg2 underlyingError:(id)arg3 ;
+(id)generalErrorWithMessage:(id)arg1 ;
+(id)getMainBundleUsingError:(id*)arg1 ;
+(id)pathForResource:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
+(BOOL)fillError:(id*)arg1 withErrorWithCode:(long long)arg2 message:(id)arg3 underlyingError:(id)arg4 ;
+(id)pathForResourceWithFilename:(id)arg1 error:(id*)arg2 ;
+(id)URLForResource:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
+(id)stringFromCGRect:(CGRect)arg1 ;
@end
