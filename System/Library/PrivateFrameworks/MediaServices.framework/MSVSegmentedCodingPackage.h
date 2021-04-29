/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSMutableDictionary, NSDictionary;

@interface MSVSegmentedCodingPackage : NSObject {

	BOOL _needsInfoDictionaryUpdate;
	NSURL* _packageURL;
	Class _archivedClass;
	NSMutableDictionary* _segmentEncoderMap;
	NSMutableDictionary* _infoDictionary;

}

@property (nonatomic,copy) NSURL * packageURL;                                     //@synthesize packageURL=_packageURL - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * segmentEncoderMap;              //@synthesize segmentEncoderMap=_segmentEncoderMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * infoDictionary;                 //@synthesize infoDictionary=_infoDictionary - In the implementation block
@property (nonatomic,retain) Class archivedClass;                                  //@synthesize archivedClass=_archivedClass - In the implementation block
@property (nonatomic,readonly) NSDictionary * allVersions; 
+(id)packageTypeIdentifier;
-(id)initWithURL:(id)arg1 ;
-(NSMutableDictionary *)infoDictionary;
-(void)reset;
-(void)setInfoDictionary:(NSMutableDictionary *)arg1 ;
-(BOOL)deleteWithError:(id*)arg1 ;
-(BOOL)saveWithError:(id*)arg1 ;
-(void)setArchivedClass:(Class)arg1 ;
-(id)coderTypeForSegment:(id)arg1 ;
-(void)setNeedsInfoDictionaryUpdate;
-(BOOL)writeWithError:(id*)arg1 ;
-(id)encoderForSegment:(id)arg1 version:(long long)arg2 ;
-(id)decodersWithError:(id*)arg1 ;
-(NSDictionary *)allVersions;
-(NSURL *)packageURL;
-(void)setPackageURL:(NSURL *)arg1 ;
-(Class)archivedClass;
-(NSMutableDictionary *)segmentEncoderMap;
-(void)setSegmentEncoderMap:(NSMutableDictionary *)arg1 ;
@end
