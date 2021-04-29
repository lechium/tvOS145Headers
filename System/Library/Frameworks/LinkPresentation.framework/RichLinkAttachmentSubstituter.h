/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSKeyedArchiverDelegate.h>
#import <libobjc.A.dylib/NSKeyedUnarchiverDelegate.h>

@class NSMutableArray, NSArray, NSString;

@interface RichLinkAttachmentSubstituter : NSObject <NSKeyedArchiverDelegate, NSKeyedUnarchiverDelegate> {

	BOOL _shouldSubstituteAttachments;
	BOOL _shouldIgnoreAppStoreMetadata;
	NSMutableArray* _archivedAttachments;
	NSArray* _attachmentsForUnarchiving;

}

@property (nonatomic,copy,readonly) NSMutableArray * archivedAttachments;              //@synthesize archivedAttachments=_archivedAttachments - In the implementation block
@property (nonatomic,copy) NSArray * attachmentsForUnarchiving;                        //@synthesize attachmentsForUnarchiving=_attachmentsForUnarchiving - In the implementation block
@property (assign,nonatomic) BOOL shouldSubstituteAttachments;                         //@synthesize shouldSubstituteAttachments=_shouldSubstituteAttachments - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreAppStoreMetadata;                        //@synthesize shouldIgnoreAppStoreMetadata=_shouldIgnoreAppStoreMetadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)archiver:(id)arg1 willEncodeObject:(id)arg2 ;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2 ;
-(BOOL)applyAttachmentSubstitutionForObject:(id)arg1 ;
-(NSMutableArray *)archivedAttachments;
-(NSArray *)attachmentsForUnarchiving;
-(void)setAttachmentsForUnarchiving:(NSArray *)arg1 ;
-(BOOL)shouldSubstituteAttachments;
-(void)setShouldSubstituteAttachments:(BOOL)arg1 ;
-(BOOL)shouldIgnoreAppStoreMetadata;
-(void)setShouldIgnoreAppStoreMetadata:(BOOL)arg1 ;
@end

