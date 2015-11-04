//
//  OCCapabilities.h
//  ownCloud iOS library
//
//  Created by Gonzalo Gonzalez on 4/11/15.
//  Copyright © 2015 ownCloud. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OCCapabilities : NSObject

/*VERSION*/
@property (nonatomic) NSInteger versionMajor;
@property (nonatomic) NSInteger versionMinor;
@property (nonatomic) NSInteger versionMicro;
@property (nonatomic, strong) NSString *versionString;
@property (nonatomic, strong) NSString *versionEdition;

/*CAPABILITIES*/

/*CORE*/
@property (nonatomic) NSInteger corePollInterval;

/*FILES SHARING*/

@property (nonatomic) BOOL isFilesSharingAPIEnabled;

//Share Link features
@property (nonatomic) BOOL isFilesSharingShareLinkEnabled;
@property (nonatomic) BOOL isFilesSharingPasswordEnforcedEnabled;
@property (nonatomic) BOOL isFilesSharingExpireDateByDefaultEnabled;
@property (nonatomic) BOOL isFilesSharingExpireDateEnforceEnabled;
@property (nonatomic) NSInteger filesSharingExpireDateDaysNumber;
@property (nonatomic) BOOL isFilesSharingAllowUserSendMailNotificationAboutShareLinkEnabled;
@property (nonatomic) BOOL isFilesSharingAllowPublicUploadsEnabled;

//Other Shares Features
@property (nonatomic) BOOL isFilesSharingAllowUserSendMailNotificationAboutOtherUsersEnabled;
@property (nonatomic) BOOL isFilesSharingReSharingEnabled;

//Federating cloud share (before called Server-to-Server sharing)
@property (nonatomic) BOOL isFilesSharingAllowUserSendSharesToOtherServersEnabled;
@property (nonatomic) BOOL isFilesSharingAllowUserReceiveSharesToOtherServersEnabled;


/*FILES*/
@property (nonatomic) BOOL isFileBigFileChunkingEnabled;
@property (nonatomic) BOOL isFileUndeleteEnabled;
@property (nonatomic) BOOL isFileVersioningEnabled;



@end
