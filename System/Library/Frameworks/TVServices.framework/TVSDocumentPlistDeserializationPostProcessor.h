/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVServices/TVSDocumentPostprocessor.h>

@class NSString;

@interface TVSDocumentPlistDeserializationPostProcessor : NSObject <TVSDocumentPostprocessor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)postprocessorName;
-(id)processDocument:(id)arg1 forResponse:(id)arg2 error:(id*)arg3 ;
@end
