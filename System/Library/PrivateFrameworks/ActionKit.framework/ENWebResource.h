/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSURL, NSString;

@interface ENWebResource : NSObject {

	NSData* _data;
	NSURL* _URL;
	NSString* _MIMEType;
	NSString* _textEncodingName;
	NSString* _frameName;

}

@property (nonatomic,retain) NSData * data;                          //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSURL * URL;                            //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * MIMEType;                      //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,copy) NSString * textEncodingName;              //@synthesize textEncodingName=_textEncodingName - In the implementation block
@property (nonatomic,copy) NSString * frameName;                     //@synthesize frameName=_frameName - In the implementation block
+(id)webResourceWithDictionary:(id)arg1 ;
-(NSData *)data;
-(NSURL *)URL;
-(NSString *)MIMEType;
-(NSString *)textEncodingName;
-(void)setURL:(NSURL *)arg1 ;
-(id)propertyList;
-(void)setData:(NSData *)arg1 ;
-(id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 ;
-(NSString *)frameName;
-(void)setMIMEType:(NSString *)arg1 ;
-(void)setTextEncodingName:(NSString *)arg1 ;
-(void)setFrameName:(NSString *)arg1 ;
@end

