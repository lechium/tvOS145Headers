/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/IPAAdjustmentStackSerializer.h>

@protocol IPAAdjustmentStackSerializer <NSObject>
@required
-(id)dataFromAdjustmentStack:(id)arg1 error:(id*)arg2;
-(id)adjustmentStackFromData:(id)arg1 error:(id*)arg2;
-(id)dataFromArchive:(id)arg1 error:(id*)arg2;
-(id)archiveFromData:(id)arg1 error:(id*)arg2;

@end


@class NSString;

@interface IPAAdjustmentStackSerializer : NSObject <IPAAdjustmentStackSerializer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)archiveDictionary:(id)arg1 error:(id*)arg2 ;
+(id)compressData:(id)arg1 ;
+(id)unarchiveData:(id)arg1 ;
+(id)archiveDictionary:(id)arg1 ;
+(id)compressData:(id)arg1 error:(id*)arg2 ;
+(id)decompressData:(id)arg1 error:(id*)arg2 ;
+(id)decompressData:(id)arg1 ;
+(id)B64StringForData:(id)arg1 ;
+(id)dataFromB64String:(id)arg1 ;
+(id)dataFromJSON:(id)arg1 error:(id*)arg2 ;
+(id)JSONFromData:(id)arg1 error:(id*)arg2 ;
+(id)dataFromJSON:(id)arg1 ;
+(id)JSONFromData:(id)arg1 ;
+(id)dataFromPropertyList:(id)arg1 error:(id*)arg2 ;
+(id)propertyListFromData:(id)arg1 error:(id*)arg2 ;
+(id)dataFromPropertyList:(id)arg1 ;
+(id)propertyListFromData:(id)arg1 ;
+(id)unarchiveData:(id)arg1 error:(id*)arg2 ;
-(id)dataFromAdjustmentStack:(id)arg1 error:(id*)arg2 ;
-(id)adjustmentStackFromData:(id)arg1 error:(id*)arg2 ;
-(id)dataFromArchive:(id)arg1 error:(id*)arg2 ;
-(id)archiveFromData:(id)arg1 error:(id*)arg2 ;
-(id)_dataFromAdjustmentStack:(id)arg1 error:(id*)arg2 ;
-(id)_adjustmentStackFromData:(id)arg1 error:(id*)arg2 ;
@end

