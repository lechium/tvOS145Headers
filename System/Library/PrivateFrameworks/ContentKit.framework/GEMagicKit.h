/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ContentKit/ContentKit-Structs.h>
@interface GEMagicKit : NSObject
+(magic_setRef)sharedMagicCookie;
+(id)magicForObject:(id)arg1 decompress:(BOOL)arg2 ;
+(id)rawMagicOutputForObject:(id)arg1 cookie:(magic_setRef)arg2 flags:(int)arg3 ;
+(id)typeHierarchyForType:(id)arg1 ;
+(id)magicForFileAtPath:(id)arg1 ;
+(id)magicForFileAtURL:(id)arg1 ;
+(id)magicForData:(id)arg1 ;
+(id)magicForFileAtPath:(id)arg1 decompress:(BOOL)arg2 ;
+(id)magicForFileAtURL:(id)arg1 decompress:(BOOL)arg2 ;
+(id)magicForData:(id)arg1 decompress:(BOOL)arg2 ;
@end

