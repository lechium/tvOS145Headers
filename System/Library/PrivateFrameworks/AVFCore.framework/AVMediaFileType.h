/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AVDispatchOnce, NSSet;

@interface AVMediaFileType : NSObject <NSCopying> {

	NSString* _uti;
	AVDispatchOnce* _supportsSampleReferencesOnce;
	BOOL _supportsSampleReferences;

}

@property (nonatomic,readonly) NSString * defaultFileExtension; 
@property (nonatomic,readonly) NSSet * supportedMediaTypes; 
@property (nonatomic,readonly) BOOL supportsSampleReferences; 
@property (nonatomic,readonly) NSString * UTI; 
@property (nonatomic,readonly) NSString * figFormatReaderFileFormat; 
@property (nonatomic,readonly) unsigned audioFileTypeID; 
+(void)initialize;
+(id)allFileTypeIdentifiers;
+(id)_mediaFileTypeWithFileTypeIdentifier:(id)arg1 exceptionReason:(id*)arg2 ;
+(CFStringRef)figFileTypeProfileFromAVFileTypeProfile:(id)arg1 ;
+(id)mediaFileTypeWithFileTypeIdentifier:(id)arg1 ;
+(id)isoFileTypes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(NSString *)UTI;
-(NSSet *)supportedMediaTypes;
-(BOOL)supportsSampleReferences;
-(NSString *)figFormatReaderFileFormat;
-(BOOL)supportsFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(BOOL)supportsOutputSettings:(id)arg1 reason:(id*)arg2 ;
-(unsigned)audioFileTypeID;
-(id)initWithFileTypeIdentifier:(id)arg1 exceptionReason:(id*)arg2 ;
-(NSString *)defaultFileExtension;
@end

