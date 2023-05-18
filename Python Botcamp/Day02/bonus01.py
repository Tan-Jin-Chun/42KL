# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    bonus01.py                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 17:33:19 by jintan            #+#    #+#              #
#    Updated: 2023/04/13 17:33:19 by jintan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Use the datetime module to find out the current time.
# Use the pytz module to set a timezone

from datetime import datetime
import pytz

# Setting the timezone to US/Pacific
local_timezone = pytz.timezone('Asia/Kuala_Lumpur')
local_time = datetime.now()
print(local_time.time())

