/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/WFNaming.h>

@class NSString, NSURL, NSDictionary;

@interface WFiTunesObject : MTLModel <MTLJSONSerializing, NSSecureCoding, WFNaming> {

	NSString* _identifier;
	NSString* _name;
	NSString* _kind;
	NSString* _censoredName;
	NSURL* _viewURL;
	NSDictionary* _artworkURLs;

}

@property (nonatomic,readonly) NSDictionary * podcastQueryDictionary; 
@property (nonatomic,retain) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * kind;                                      //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) NSString * censoredName;                            //@synthesize censoredName=_censoredName - In the implementation block
@property (nonatomic,readonly) NSURL * viewURL;                                    //@synthesize viewURL=_viewURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * artworkURLs;                         //@synthesize artworkURLs=_artworkURLs - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * wfName; 
+(BOOL)supportsSecureCoding;
+(Class)classForParsingJSONDictionary:(id)arg1 ;
+(id)JSONKeyPathsByPropertyKey;
+(id)allowedSecureCodingClassesByPropertyKey;
+(id)releaseDateJSONTransformer;
+(id)identifierJSONTransformer;
+(id)artistIDJSONTransformer;
+(id)artworkURLsJSONTransformer;
-(NSDictionary *)podcastQueryDictionary;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)kind;
-(void)setKind:(NSString *)arg1 ;
-(NSString *)wfName;
-(NSURL *)viewURL;
-(id)initWithName:(id)arg1 identifier:(id)arg2 kind:(id)arg3 ;
-(NSString *)censoredName;
-(NSDictionary *)artworkURLs;
@end

