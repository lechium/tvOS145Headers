/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPSpecializationMetadata.h>
#import <libobjc.A.dylib/LPLinkMetadataPresentationTransformer.h>

@class NSAttributedString, NSString;

@interface LPSharingStatusMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer> {

	NSAttributedString* _status;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSAttributedString * status;              //@synthesize status=_status - In the implementation block
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSAttributedString *)status;
-(void)setStatus:(NSAttributedString *)arg1 ;
-(id)presentationPropertiesForTransformer:(id)arg1 ;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg1 ;
@end

